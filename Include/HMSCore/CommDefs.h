#ifndef COMMPORTDEF_H
#define COMMPORTDEF_H

#define PORT_MAX_READ_BUFFER		8192
#define PORT_MAX_WRITE_BUFFER		8192
#define PORT_READ_BUFFER			1024
#define PORT_WRITE_BUFFER			1024
#define READ_TIMEOUT				500
#define WRITE_TIMEOUT				500
#define CHECK_WRITE_QUEUE			50
#define WAIT_AFTER_WRITE			50


#define EVENT_COMEVENT  0
#define EVENT_READ      1
#define EVENT_WRITE     2
#define EVENT_COUNT     3
#define COM_ERROR		-1
#define COM_OK			0

#define MAX_READSIZE 80L


// Handshaking
typedef enum   eHanshaking
{
	EHandshakeUnknown		= -1,	// Unknown
	EHandshakeOff			=  0,	// No handshaking
	EHandshakeHardware		=  1,	// Hardware handshaking (RTS/CTS)
	EHandshakeSoftware		=  2	// Software handshaking (XON/XOFF)
} 
EHandshake;


// Enumeration type for ComNotify
enum COM_EVENTS
	{
	COM_CONNECT,
	COM_DATA_RECEIVED,
	COM_NO_DATA,
	COM_SEND_STARTED,
	COM_SEND_DONE
	};


// -=-=-=-=-=-=-=-=-=-=-=-=-=- DEFINITIONS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

#define SIZE_INQ     1152
#define SIZE_OUTQ    2048
#define MAX_READSIZE 80L

// Set these values to make auto detection work
#define MIN_AD_TOTAL 15
#define MIN_AD_MIX   6

// Values for nBestGuess
#define AD_DONT_KNOW 0
#define AD_8N1       1
#define AD_7O1       2
#define AD_7E1       3

// Flag values in afHandshake
#define HANDSHAKE_RCV_X     0x0001
#define HANDSHAKE_RCV_DTR   0x0002
#define HANDSHAKE_RCV_RTS   0x0004
#define HANDSHAKE_SND_X     0x0008
#define HANDSHAKE_SND_CTS   0x0010
#define HANDSHAKE_SND_DSR   0x0020
#define HANDSHAKE_SND_DCD   0x0040

#define MDMSTAT_CTS 0x10
#define MDMSTAT_DSR 0x20
#define MDMSTAT_DCD 0x80

#define STDCOM struct s_stdcom *

// System value item IDs

#define SFID_COMSTD_BAUD          0x1011
#define SFID_COMSTD_DATABITS      0x1012
#define SFID_COMSTD_STOPBITS      0x1013
#define SFID_COMSTD_PARITY        0x1014
#define SFID_COMSTD_HANDSHAKING   0x1015
#define SFID_COMSTD_XON           0x1016
#define SFID_COMSTD_XOFF          0x1017
#define SFID_COMSTD_BREAK         0x1018
#define SFID_COMSTD_AUTODETECT    0x1019

// Identifiers for events in ahEvents
#define EVENT_COMEVENT  0
#define EVENT_READ      1
#define EVENT_WRITE     2
#define EVENT_COUNT     3



// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-= CONSTANTS =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#define COM_VERSION 20

// Function return codes
#define COM_OK						0
#define COM_INVALID_HANDLE			1
#define COM_NOT_ENOUGH_MEMORY		2
#define COM_PORT_NOT_OPEN			3
#define COM_PORT_IN_USE 			6
#define COM_PORT_INVALID_NAME		7
#define COM_CANCELLED				8
#define COM_SEND_QUEUE_STUCK		12
#define COM_DEVICE_INVALID			13
#define COM_DEVICE_VERSION_ERROR	15
#define COM_DEVICE_ERROR			16
#define COM_DEVICE_LIBERROR 		14
#define COM_DEVICE_INVALID_SETTING	17
#define COM_BUSY					18
#define COM_NOT_SUPPORTED			19
#define COM_FAILED					21
#define COM_NOT_FOUND				22
#define COM_CANT_OVERRIDE			25

// bits in fsStatus value
#define COMSB_WAIT_XON	 0x01
#define COMSB_WAIT_CTS	 0x02
#define COMSB_WAIT_DSR	 0x04
#define COMSB_WAIT_DCD	 0x08
#define COMSB_WAIT_BUSY	 0x40	/* flow controlled off for some other reason */
#define COMSB_RESERVED	 0x80	/* reserved for use by textsend */

// Bit definition of common fields
#define COM_BAUD		0x01
#define COM_DATABITS	0x02
#define COM_STOPBITS	0x04
#define COM_PARITY		0x08
#define COM_AUTO		0x10

// Common field constants
#define COM_PARITY_MIN	 0
#define COM_PARITY_NONE  0
#define COM_PARITY_ODD	 1
#define COM_PARITY_EVEN  2
#define COM_PARITY_MARK  3
#define COM_PARITY_SPACE 4
#define COM_PARITY_MAX	 4

#define COM_STOPBITS_1	 0
#define COM_STOPBITS_1_5 1
#define COM_STOPBITS_2	 2

/* Values for usReason arg. to caller supplied status functions */
#define COMSEND_LOCAL			   0  /* so callers can call their own
										 handler function without confusion */
#define COMSEND_FIRSTCALL		   1  /* Handler is being registered */
#define COMSEND_LASTCALL		   2  /* Handler is being replaced */
#define COMSEND_DATA_WAITING	   3  /* Unbuffered data is pending */
#define COMSEND_NORMAL			   4  /* Routine call, all data is buffered */


/* Return values from caller supplied status functions */
#define COMSEND_OK				   0
#define COMSEND_GIVEUP			   1
#define COMSEND_CLEAR_DATA		   2
#define COMSEND_FORCE_CONTINUATION 3


// Options for ComOverride()
#define COM_OVERRIDE_8BIT	  0x0001	// forces 8-bit (no parity) mode
#define COM_OVERRIDE_RCVALL   0x0002	// suspends any features that would
										//	prevent any character from
										//	being received (XON/XOFF etc.)
#define COM_OVERRIDE_SNDALL   0x0004	// ditto for sending


#define COM_MAX_DEVICE_NAME 40
#define COM_MAX_PORT_NAME	120


#if defined(DEBUG_THREAD)
    #define DEBUGSTR
    #define DBG_THREAD(s,a1,a2,a3,a4,a5) DbgOutStr(s,a1,a2,a3,a4,a5)
#else
    #define DBG_THREAD(s,a1,a2,a3,a4,a5)
#endif

#if defined(DEBUG_READ)
    #define DEBUGSTR
    #define DBG_READ(s,a1,a2,a3,a4,a5) DbgOutStr(s,a1,a2,a3,a4,a5)
#else
    #define DBG_READ(s,a1,a2,a3,a4,a5)
#endif

#if defined(DEBUG_WRITE)
    #define DEBUGSTR
    #define DBG_WRITE(s,a1,a2,a3,a4,a5) DbgOutStr(s,a1,a2,a3,a4,a5)
#else
    #define DBG_WRITE(s,a1,a2,a3,a4,a5)
#endif

#if defined(DEBUG_EVENTS)
    #define DEBUGSTR
    #define DBG_EVENTS(s,a1,a2,a3,a4,a5) DbgOutStr(s,a1,a2,a3,a4,a5)
#else
    #define DBG_EVENTS(s,a1,a2,a3,a4,a5)
#endif

#if defined(DEBUG_AD)
    #define DEBUGSTR
    #define DBG_AD(s,a1,a2,a3,a4,a5) DbgOutStr(s,a1,a2,a3,a4,a5)
#else
    #define DBG_AD(s,a1,a2,a3,a4,a5)
#endif


#define DIM(a) (sizeof(a) / sizeof(a[0]))
#define IN_RANGE(n, lo, hi) ((lo) <= (n) && (n) <= (hi))
#define bitset(t, b) ((t) |= (b))
#define bitclear(t, b) ((t) &= (~(b)))
#define bittest(t, b) ((t) & (b))

#define startinterval() 	GetTickCount()
#define interval(X) 		((GetTickCount()-(DWORD)X)/100L)



#endif