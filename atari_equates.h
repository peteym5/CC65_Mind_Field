//Atari Hardware Registers
//File version 1.03
//2005-01-02 17:47:15
//Register names based on PDF specifications
//---------------------------------------
// HARDWARE
//CPU vectors
#define	NMIV	 		         0xFFFA 	//NMI vector
#define	RESETV	 		       0xFFFC 	//RESET vector
#define	IRQV	 		         0xFFFE 	//IRQ vector

// OS Clock
#define	RTCLOK             0x18

// OS Screen Controls 
#define	LMARGIN	 		       0x52
#define	RMARGIN	 		       0x53
#define	ROWCRS	 		       0x54	// Row Cursor
#define	COLCRS	 		       0x55	// Column Cursor
#define	DINDEX             0x57 // Graphics Mode
#define	SAVMSC	 		       0x58	// Address of Screen
                                          

// Shadow Registers
#define	VDSLST   		       0X0200		// Address for Display List Interupts
#define	VPRCED   		       0x0202    // 514,515
#define	VINTER   		       0x0204		// 516,517
#define	VBREAK   		       0x0206		// 518,519
#define	VKEYBD   		       0x0208		// 520,521
#define	VSERIN   		       0x020A		// 522,523
#define	VSEROR   		       0x020C		// 524,525
#define	VSEROC   		       0x020E		// 526,527
#define	VTIMR1   		       0x0210		// 528,529
#define	VTIMR2   		       0x0212		// 530,531
#define	VTIMR3   		       0x0214		// 532,533
#define	VIMIRQ   		       0x0216		// 534,535
#define	CDTMV1   		       0x0218
#define	CDTMV2   		       0x021A
#define	CDTMV3   		       0x021C
#define	CDTMV4   		       0x022E
#define	CDTMV5   		       0x0220
#define	VVBLKI   		       0x0222		// 546,547
#define	VVBLKD   		       0x0224		// 548,549
#define	CDTMA1   		       0x0226
#define	CDTMA2   		       0x0228
#define	SDNCTK   		       0x022F    // 559
#define	SDLSTW   		       0x0230		// Shadow address program ANTIC 'Display List'
#define	SDLSTL   		       0x0230		// Shadow Lo Byte of program ANTIC 'Display List'
#define	SDLSTH   		       0x0231		// Shadow Hi Byte of program ANTIC 'Display List'
#define	TXTROW   		       0x0290		// wiersz kursora w oknie tekstowym
#define	TXTCOL   		       0x0291		// (2) kolumna kursora w oknie tekstowym
#define	TINDEX   		       0x0293		// tryb graficzny OS w oknie tekstowym
#define	TXTMSC   		       0x0294		// (2) adres pamieci okna tekstowego
                    
#define	SDMCTL   		       0x022F		// Shadow Register DMACTL
#define	GPRIOR   		       0x026F		// Shadow Register GTIACTL
#define	CRSINH   		       0x02F0		// znacznik widocznosci kursora
#define	CHACT    		       0x02F3		// 755 Shadow Register CHRCTL
#define	CHBAS    		       0x02F4		// 756 Shadow Register CHBASE
#define	CH1      		       0x02FC			// Shadow Register KBCODE
                    
#define	PCOLR0   		       0x02C0
#define	PCOLR1   		       0x02C1
#define	PCOLR2   		       0x02C2
#define	PCOLR3   		       0x02C3
#define	COLOR0   		       0x02C4
#define	COLOR1   		       0x02C5
#define	COLOR2   		       0x02C6
#define	COLOR3   		       0x02C7
#define	COLOR4   		       0x02C8

// GTIA Write
#define	GTIA_START         0xD000
#define	HPOSP0	           0xD000
#define	HPOSP1	           0xD001
#define	HPOSP2	           0xD002
#define	HPOSP3	           0xD003
#define	HPOSM0	           0xD004
#define	HPOSM1	           0xD005
#define	HPOSM2	           0xD006
#define	HPOSM3	           0xD007
#define	SIZEP0	           0xD008
#define	SIZEP1	           0xD009
#define	SIZEP2	           0xD00A
#define	SIZEP3	           0xD00B
#define	SIZEM	             0xD00C
#define	GRAFP0	           0xD00D
#define	GRAFP1	           0xD00E
#define	GRAFP2	           0xD00F
#define	GRAFP3	           0xD010
#define	GRAFM	             0xD011
#define	COLPM0	           0xD012
#define	COLPM1	           0xD013
#define	COLPM2	           0xD014
#define	COLPM3	           0xD015
#define	COLPF0	           0xD016
#define	COLPF1	           0xD017
#define	COLPF2	           0xD018
#define	COLPF3	           0xD019
#define	COLBAK	           0xD01A
#define	COLBK	             0xD01A 	//alias of COLBAK
#define	PRIOR	             0xD01B
#define	VDELAY	           0xD01C
#define	GRACTL	           0xD01D
#define	HITCLR	           0xD01E
#define	CONSOL	           0xD01F

// GTIA Read
#define	M0PF	             0xD000
#define	M1PF	             0xD001
#define	M2PF	             0xD002
#define	M3PF	             0xD003
#define	P0PF	             0xD004
#define	P1PF	             0xD005
#define	P2PF	             0xD006
#define	P3PF	             0xD007
#define	M0PL	             0xD008
#define	M1PL	             0xD009
#define	M2PL	             0xD00A
#define	M3PL	             0xD00B
#define	P0PL	             0xD00C
#define	P1PL	             0xD00D
#define	P2PL	             0xD00E
#define	P3PL	             0xD00F
#define	TRIG0	             0xD010
#define	TRIG1	             0xD011
#define	TRIG2	             0xD012
#define	TRIG3	             0xD013
#define	PAL	               0xD014
                               
// Pokey Write                 
#define	POKEY_START        0xD200
#define	AUDF1	             0xD200
#define	AUDF2	             0xD202
#define	AUDF3	             0xD204
#define	AUDF4	             0xD206
#define	AUDC1	             0xD201
#define	AUDC2	             0xD203
#define	AUDC3	             0xD205
#define	AUDC4	             0xD207
#define	AUDCTL	           0xD208
#define	STIMER	           0xD209
#define	SKRES	             0xD20A
#define	POTGO	             0xD20B
#define	SEROUT	           0xD20D
#define	IRQEN	             0xD20E
#define	SKCTL	             0xD20F



// Pokey Read
#define	POT0	             0xD200
#define	POT1	             0xD201
#define	POT2	             0xD202
#define	POT3	             0xD203
#define	POT4	             0xD204
#define	POT5	             0xD205
#define	POT6	             0xD206
#define	POT7	             0xD207
#define	ALLPOT	           0xD208
#define	POTST	             0xD208
#define	KBCODE	           0xD209
#define	RANDOM	           0xD20A
#define	SERIN	             0xD20D
#define	IRQST	             0xD20E
#define	SKSTAT	           0xD20F




// PIA
#define	PIA_START          0xD300
#define	PORTA	             0xD300
#define	PORTB	             0xD301
#define	PACTL	             0xD302
#define	PBCTL	             0xD303

// ANTIC
#define	ANTIC_START        0xD400     
#define	DMACTL	           0xD400    
#define	CHACTL	           0xD401    
#define	DLISTW	           0xD402
#define	DLISTL	           0xD402    
#define	DLISTH	           0xD403    
#define	HSCROL	           0xD404    
#define	VSCROL	           0xD405    
#define	PMBASE	           0xD407    
#define	CHBASE	           0xD409    
#define	WSYNC	             0xD40A     
#define	VCOUNT	           0xD40B    
#define	PENH	             0xD40C    
#define	PENV	             0xD40D    
#define	NMIEN	             0xD40E     
#define	NMIRES	           0xD40F    
#define	NMIST	             0xD40F     

// ANTIC dlisplay list commands
#define	DL_E1	             0x00
#define	DL_E2	             0x10
#define	DL_E3	             0x20
#define	DL_E4	             0x30
#define	DL_E5	             0x40
#define	DL_E6	             0x50
#define	DL_E7	             0x60
#define	DL_E8	             0x70
#define	DL_JUMP	           0x01 	//jump to adress and create one empty line
#define	DL_LOOP	           0x41 	//jump to adress and wait for vsync
#define	DL_ADRES	         0x40 	//load memory counter
//  #define	DL_DLI	           0x80 	//dli interrupt
#define	DL_HS	             0x10 	//horizontal scroll
#define	DL_VS	             0x20 	//vertical scroll
//BASIC GR-codes:
#define	DL_GR0	           0x02 	//text hi-res mode 40 bytes/line
#define	DL_GR1	           0x06 	//4 color text mode 20 bytes/line, 1 line V
#define	DL_GR2	           0x07 	//4 color text mode 20 bytes/line, 2 line V
#define	DL_GR3	           0x08 	//4 color graphics mode 10 bytes/line, 8 line V
#define	DL_GR4	           0x09 	//1 color graphics mode 10 bytes/line, 4 line V
#define	DL_GR5	           0x0A 	//4 color graphics mode, 20 bytes/line, 4 line V
#define	DL_GR6	           0x0B 	//1 color graphics mode, 20 bytes/line, 2 line V
#define	DL_GR7	           0x0D 	//4 color graphics mode, 40 bytes/line, 2 line V
#define	DL_GR8	           0x0F 	//graphics hi-res mode 40 bytes/line
#define	DL_GR12	           0x04 	//text - 4+1 color, 1 line V
#define	DL_GR15	           0x0E 	//4 color graphics mode, 40 bytes/line, 1 line V
// modes not supported by BASIC
#define	DL_A3	             0x03 	//hi-res text mode 8x10 pixel char, 40 bytes/line
#define	DL_A5	             0x05 	//text - 4+1 color, 2 line V
#define	DL_AC	             0x0C 	//1 color graphics mode, 20 bytes/line, 1 line V

//------------------------------------------
// OS CALLS
#define	SETVBV	          0xE45C
#define	SYSVBV	          0xE45F
#define	XITVBV	          0xE462
//------------------------------------------
// USEFUL
// bit mask
#define	OR0	             1
#define	OR1	             2
#define	OR2	             4
#define	OR3	             8
#define	OR4	             16
#define	OR5	             32
#define	OR6	             64
#define	OR7	             128
#define	AND0	           0xFE
#define	AND1	           0xFD
#define	AND2	           0xFB
#define	AND3	           0xF7
#define	AND4	           0xEF
#define	AND5	           0xDF
#define	AND6	           0xBF
#define	AND7	           0x7F


//-----------------------------------------------
//hw bits
#define	SKSTAT_KEYPRESS	           OR2 	//key pressed
#define	SKSTAT_SHIFT	           OR3 	//shift key pressed
#define	SKSTAT_SR_BUSY	           OR1 	//serial input register busy
#define	SKSTAT_FERR	           OR7 	//framing error
#define	SKSTAT_KB_OVR	           OR6 	//keyboard overrun
#define	SKSTAT_SR_OVR	           OR5 	//serial overrun
#define	SKSTAT_IN_PAD	           OR4 	//serial input pin


//Atari OS Routines
//File version 1.01
//2005-03-13 10:35:00
//-----------------------------
#define	RAMLO	           0x04
#define	IRQENS	         0x10
#define	RTCLOK1	         0x14
#define	TIMER	           0x14
#define	RTCLOK2	         0x13
#define	RTCLOK3	         0x12
#define	RAMTOP	         0x6A
#define	ATRACT	         0x4D
#define	KEYDEF	         0x79
//----------------------------
#define	WARMST	         0x08
#define	DOSVEC	         0x0A
#define	DOSINI	         0x0C
#define	COLDST	         0x0244
#define	PUPBT1	         0x033D
#define	PUPBT2	         0x033E
#define	PUPBT3	         0x033F
#define	ZIOCB	           0x20
#define	RUNAD	           0x02E0
#define	INITAD	         0x02E2
#define	KBCODES	         0x02FC
#define	HATABS	         0x031A
//bloki IOCB
#define	IOCB	           0x0340
#define	ICHID	           0x0340
#define	ICDNO	           0x0341
#define	ICCOM	           0x0342
#define	ICSTA	           0x0343
#define	ICBAL	           0x0344
#define	ICBAH	           0x0345
#define	ICPTL	           0x0346
#define	ICPTH	           0x0347
#define	ICBLL	           0x0348
#define	ICBLH	           0x0349
#define	ICAX1	           0x034A
#define	ICAX2	           0x034B
#define	ICAX3	           0x034C
#define	ICAX4	           0x034D
#define	ICAX5	           0x034E
#define	ICAX6	           0x034F
#define	CIO_OPEN	           3
#define	CIO_GETTEXT	         5
#define	CIO_GETDATA	         7
#define	CIO_PUTTEXT	         9
#define	CIO_PUTDATA	         11
#define	CIO_CLOSE	           12
#define	CIO_GETSTATUS	       13
#define	CIO_READ	           4
#define	CIO_WRITE	           8
#define	CIO_DIR	             6
//------------------------------
//Procedury, tablice OS
#define	PUTLINE	           0xC642
#define	DSKINT	           0xE453
#define	CIOMAIN	           0xE456
#define	CIOVXLE            0xE4DF
#define	CIOV800            0xE4C4
#define	CIOVANY	           0xE456
#define	CIOV               CIOVXLE  
#define	SIOINT	           0xE459
#define	SIOV	             0xE459
#define	SELFTST	           0xE471
#define	COLDV	             0xE477
#define	COLD	             0xE477
#define	NEWDEV	           0xEEBC

//Graphic Direct Calls
#define	FILFLG             0x02B7
#define	DRAWXLE            0xF9C2

