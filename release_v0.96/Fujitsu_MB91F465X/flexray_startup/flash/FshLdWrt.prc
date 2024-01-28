# *****************************************
# Writing of flash memory 
# *****************************************

# Set Variable
# *****************************************
# ���[�U�w��
# *****************************************
set variable WRITE_SIZE	= 0x00002000	#�������݃T�C�Y
#set variable DATA_SIZE	= 0x00060000	#�f�[�^�T�C�Y
set variable DATA_SIZE	= 0x00002000	#�f�[�^�T�C�Y
set variable WRITE_ADR	= 0x00080000	#��������A�h���X
#�������݃f�[�^
set variable DATA_FILE	= Debug\ABS\flexray_startup.bin
#�������݃v���O����
set variable WRITE_CODE	= flash\flash_write.bin	
#�������ݐ揉�����v���O����
set variable ERASE_CODE	= flash\flash_erase_sec.bin
#�I�u�W�F�N�g�t�@�C���i�^�[�Q�b�g�t�@�C���j
set variable ABS_FILE	= Debug\ABS\flexray_startup.abs	

# *****************************************
# FlexRay
# *****************************************
#set variable CODE_TOP	= 0x00034000	#�v���O�����擪�A�h���X
set variable CODE_TOP	= 0x00030000	#�v���O�����擪�A�h���X

set variable MON_TBR	= 0x000FFC00	#���j�^�x�N�^�e�[�u���A�h���X hiraishi
set variable MON_TBR_t	= 0x00080000	#���j�^�x�N�^�e�[�u���A�h���X haibara
set variable MON_ILM	= 0x10		#ILM�ɂ�銄���݃}�X�N	haibara
set variable STK_TOP	= 0x0002ffff	#haibara SP_TOP
#set variable DATA_TOP	= 0x00037000	#�����݃f�[�^�i�[�A�h���X
set variable DATA_TOP	= 0x0002E000	#�����݃f�[�^�i�[�A�h���X

# *****************************************
# �����ݐ�̃t���b�V��������
# *****************************************
printf "Erase Flash Memory at written sector\n"
load/binary %ERASE_CODE, %CODE_TOP

# Set Register
set register PC  = %CODE_TOP
set register R1  = %WRITE_ADR
set register R2  = %DATA_TOP
set register R3  = %DATA_SIZE
#set register SSP = %STK_TOP	#hiraishi
set register SSP = %STK_TOP	#haibara
set register tbr = %MON_TBR
set register ilm = %MON_ILM	#haibara

#quit


go, %CODE_TOP+0x26

if %R4 != 0
	printf "Erase Flash Memory Error\n"
	cancel variable/all
	quit
endif

#quit

# *****************************************
# �t���b�V��������
# *****************************************
printf "Write Flash Memory\n"
load/binary %WRITE_CODE, %CODE_TOP
#quit
set variable FILEOFFSET	= 0x00000000	#�t�@�C���I�t�Z�b�g�l
while 1
	load/binary %DATA_FILE, %DATA_TOP, %FILEOFFSET, %WRITE_SIZE

	# Set Register
	set register PC  = %CODE_TOP
	set register R1  = %WRITE_ADR
	set register R2  = %DATA_TOP
	set register R3  = %WRITE_SIZE
	#set register SSP = %STK_TOP	#hiraishi
	set register SSP = %STK_TOP	#haibara
	set register tbr = %MON_TBR
#quit
	go, %CODE_TOP+0x26

	if %R4 != 0
		printf "Write Flash Memory Error\n"
		break
	endif
	
	set variable WRITE_ADR = %EVAL(%WRITE_ADR + %WRITE_SIZE)
	set variable FILEOFFSET = %EVAL(%FILEOFFSET + %WRITE_SIZE)

	if (%DATA_SIZE < %FILEOFFSET)
		printf "Write Flash Memory Success!\n"
		load/object ABS_FILE
		printf "Target file download! for rev5!\n"
		set register tbr = %MON_TBR_t
#		set register SSP = %STK_TOP	#haibara
		break
	endif
endw


cancel variable/all

