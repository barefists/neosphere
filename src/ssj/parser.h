/**
 *  Sphere: the JavaScript game platform
 *  Copyright (c) 2015-2023, Fat Cerberus
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither the name of Spherical nor the names of its contributors may be
 *    used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
**/

#ifndef SPHERE__PARSER_H__INCLUDED
#define SPHERE__PARSER_H__INCLUDED

typedef struct command command_t;

typedef
enum token_tag
{
	TOK_ANY,
	TOK_ERROR,
	TOK_FILE_LINE,
	TOK_NUMBER,
	TOK_REF,
	TOK_STRING,
} token_tag_t;

command_t*   command_parse      (const char* string);
void         command_free       (command_t* it);
int          command_len        (const command_t* it);
token_tag_t  command_get_tag    (const command_t* it, int index);
unsigned int command_get_handle (const command_t* it, int index);
int          command_get_int    (const command_t* it, int index);
double       command_get_float  (const command_t* it, int index);
const char*  command_get_rest   (const command_t* it, int index);
const char*  command_get_string (const command_t* it, int index);

#endif // SPHERE__PARSER_H__INCLUDED
