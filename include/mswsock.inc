;--- include file created by h2incx v0.99.11, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\MSWSOCK.H, last modified: 4/24/1998 0:0

ifndef _MSWSOCK_
_MSWSOCK_	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
SO_CONNDATA	EQU	7000h
SO_CONNOPT	EQU	7001h
SO_DISCDATA	EQU	7002h
SO_DISCOPT	EQU	7003h
SO_CONNDATALEN	EQU	7004h
SO_CONNOPTLEN	EQU	7005h
SO_DISCDATALEN	EQU	7006h
SO_DISCOPTLEN	EQU	7007h
SO_OPENTYPE	EQU	7008h
SO_SYNCHRONOUS_ALERT	EQU	10h
SO_SYNCHRONOUS_NONALERT	EQU	20h
SO_MAXDG	EQU	7009h
SO_MAXPATHDG	EQU	700Ah
SO_UPDATE_ACCEPT_CONTEXT	EQU	700Bh
SO_CONNECT_TIME	EQU	700Ch
TCP_BSDURGENT	EQU	7000h
WSARecvEx proto WINSTDCALLCONV :SOCKET, :ptr SBYTE, :DWORD, :ptr DWORD
TRANSMIT_FILE_BUFFERS	struct 
Head	LPVOID	?
HeadLength	DWORD	?
Tail	LPVOID	?
TailLength	DWORD	?
TRANSMIT_FILE_BUFFERS	ends

PTRANSMIT_FILE_BUFFERS typedef ptr TRANSMIT_FILE_BUFFERS
LPTRANSMIT_FILE_BUFFERS typedef ptr TRANSMIT_FILE_BUFFERS

TF_DISCONNECT	EQU	01h
TF_REUSE_SOCKET	EQU	02h
TF_WRITE_BEHIND	EQU	04h
if 0
TransmitFile proto WINSTDCALLCONV :SOCKET, :HANDLE, :DWORD, :DWORD, :LPOVERLAPPED, :LPTRANSMIT_FILE_BUFFERS, :DWORD
AcceptEx proto WINSTDCALLCONV :SOCKET, :SOCKET, :PVOID, :DWORD, :DWORD, :DWORD, :LPDWORD, :LPOVERLAPPED
GetAcceptExSockaddrs proto WINSTDCALLCONV :PVOID, :DWORD, :DWORD, :DWORD, :ptr ptr sockaddr, :LPINT, :ptr ptr sockaddr, :LPINT
else
@DefProto WINBASEAPI, TransmitFile, stdcall, , <:SOCKET, :HANDLE, :DWORD, :DWORD, :LPOVERLAPPED, :LPTRANSMIT_FILE_BUFFERS, :DWORD>, 28
@DefProto WINBASEAPI, AcceptEx, stdcall, , <:SOCKET, :SOCKET, :PVOID, :DWORD, :DWORD, :DWORD, :LPDWORD, :LPOVERLAPPED>, 32
@DefProto WINBASEAPI, GetAcceptExSockaddrs, stdcall, , <:PVOID, :DWORD, :DWORD, :DWORD, :ptr ptr sockaddr, :LPINT, :ptr ptr sockaddr, :LPINT>, 32
endif
proto_LPFN_TRANSMITFILE typedef proto WINSTDCALLCONV :SOCKET,:HANDLE,:DWORD,:DWORD,:LPOVERLAPPED,:LPTRANSMIT_FILE_BUFFERS,:DWORD
LPFN_TRANSMITFILE typedef ptr proto_LPFN_TRANSMITFILE
WSAID_TRANSMITFILE	EQU	<{ 0b5367df0h , 0cbach , 11cfh , { 95h , 0cah , 00h , 80h , 5fh , 48h , 0a1h , 92h } }>
proto_LPFN_ACCEPTEX typedef proto WINSTDCALLCONV :SOCKET,:SOCKET,:PVOID,:DWORD,:DWORD,:DWORD,:LPDWORD,:LPOVERLAPPED
LPFN_ACCEPTEX typedef ptr proto_LPFN_ACCEPTEX
WSAID_ACCEPTEX	EQU	<{ 0b5367df1h , 0cbach , 11cfh , { 95h , 0cah , 00h , 80h , 5fh , 48h , 0a1h , 92h } }>
proto_LPFN_GETACCEPTEXSOCKADDRS typedef proto WINSTDCALLCONV :PVOID,:DWORD,:DWORD,:DWORD,:ptr ptr sockaddr,:LPINT,:ptr ptr sockaddr,:LPINT
LPFN_GETACCEPTEXSOCKADDRS typedef ptr proto_LPFN_GETACCEPTEXSOCKADDRS
WSAID_GETACCEPTEXSOCKADDRS	EQU	<{ 0b5367df2h , 0cbach , 11cfh , { 95h , 0cah , 00h , 80h , 5fh , 48h , 0a1h , 92h } }>
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
