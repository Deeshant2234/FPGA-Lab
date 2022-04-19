.include "m328Pdef.inc"

Start:
	ldi r17, 0b11100011 ; identifying input pins 2,3
	out DDRD,r17		; declaring pins as input
	ldi r17, 0b11111111 ;
	out PORTD,r17		; activating internal pullup for pins 10,11,12,13  
	in r17,PIND

	ldi r16, 0b00110000 ;identifying output pins 13
	out DDRB,r16		;declaring pins as output

	;Reading pin2
	lsr r17
	lsr r17				; Twice shift right to read pin 2
	mov r16, r17		; Backing up the portD content in r16
	ldi r20,0b00000001	; Mask for reading pin 2
	and r17,r20 		; Getting input from pin2 (input A)

	;Reading pin3
	mov r18,r16			; Retrieving the backup stored in r16
	lsr r18				; shift right to read pin 3
	and r18, r20 		; Getting the input from pin3 (input B)


	;Implementing the kmap expression
	mov r21, r17	        ; A
	mov r22, r21		; A
	mov r23, r18           ; B
	and r21, r23           ; (A.B)
	eor r21, r20           ; (A.B)'
	or  r22, r23           ; (A+B)
	or  r21,r22 		; (A + B)+(A.B)'

	sub r21,r20
	breq loop
	rjmp Start

loop:
	ldi r16, 0b00100000
	out PORTB,r16

