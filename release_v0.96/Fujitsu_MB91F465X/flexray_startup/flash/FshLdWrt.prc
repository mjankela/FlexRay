# *****************************************
# Writing of flash memory 
# *****************************************

# Set Variable
# *****************************************
# ユーザ指定
# *****************************************
set variable WRITE_SIZE	= 0x00002000	#書き込みサイズ
#set variable DATA_SIZE	= 0x00060000	#データサイズ
set variable DATA_SIZE	= 0x00002000	#データサイズ
set variable WRITE_ADR	= 0x00080000	#書換え先アドレス
#書き込みデータ
set variable DATA_FILE	= Debug\ABS\flexray_startup.bin
#書き込みプログラム
set variable WRITE_CODE	= flash\flash_write.bin	
#書き込み先初期化プログラム
set variable ERASE_CODE	= flash\flash_erase_sec.bin
#オブジェクトファイル（ターゲットファイル）
set variable ABS_FILE	= Debug\ABS\flexray_startup.abs	

# *****************************************
# FlexRay
# *****************************************
#set variable CODE_TOP	= 0x00034000	#プログラム先頭アドレス
set variable CODE_TOP	= 0x00030000	#プログラム先頭アドレス

set variable MON_TBR	= 0x000FFC00	#モニタベクタテーブルアドレス hiraishi
set variable MON_TBR_t	= 0x00080000	#モニタベクタテーブルアドレス haibara
set variable MON_ILM	= 0x10		#ILMによる割込みマスク	haibara
set variable STK_TOP	= 0x0002ffff	#haibara SP_TOP
#set variable DATA_TOP	= 0x00037000	#書込みデータ格納アドレス
set variable DATA_TOP	= 0x0002E000	#書込みデータ格納アドレス

# *****************************************
# 書込み先のフラッシュ初期化
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
# フラッシュ書込み
# *****************************************
printf "Write Flash Memory\n"
load/binary %WRITE_CODE, %CODE_TOP
#quit
set variable FILEOFFSET	= 0x00000000	#ファイルオフセット値
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

