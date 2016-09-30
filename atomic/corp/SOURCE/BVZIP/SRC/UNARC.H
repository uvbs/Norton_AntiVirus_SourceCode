/* �����������������������������������������������ͻ */
/* � Program     :  Unarc.h                        � */
/* � Release     :  1.0                            � */
/* � Description :  Extra routines for supporting  � */
/* �                obsolete compression formats   � */
/* �����������������������������������������������Ķ */
/* � Author      :  Gus Smedstad                   � */
/* � Last Updated:  04/16/92                       � */
/* �����������������������������������������������Ķ */
/* � Notice     : This source code is NOT intended � */
/* �              for general distribution.  Care  � */
/* �              should be taken to preserve its  � */
/* �              confidentiality.                 � */
/* �����������������������������������������������Ķ */
/* � Copyright (C) 1992 by NoGate Software Corp.   � */
/* �             All rights reserved.              � */
/* �����������������������������������������������ͼ */
#ifndef __UNARC_H
#define __UNARC_H

#ifdef __cplusplus
extern "C" {
#endif

unsigned far pascal expand_huffman_size(void);
void far pascal init_expand_huffman(void far *vars);
int far pascal expand_huffman(char far *inbuffer, unsigned short far *input_size,
                              char far *outbuffer, unsigned short far *output_size,
                              void far *vars, char final);

unsigned far pascal uncrunch_size(void);
void far pascal init_uncrunch(void far *vars, char newhash, char rle_flag);
int far pascal uncrunch(char far *inbuffer, unsigned short far *input_size,
                        char far *outbuffer, unsigned short far *output_size,
                        void far *vars, char final);

unsigned far pascal fatten_size(void);
void far pascal init_fatten(void far *var, int length_bits);
int far pascal fatten(char far *inbuffer,  unsigned short far *input_size,
                      char far *outbuffer, unsigned short far *output_size,
                      void far *var, char final);

#ifdef __cplusplus
 }
#endif

#endif
