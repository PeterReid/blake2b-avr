/*
 * blake2b_avr.c
 *
 * Created: 6/8/2014 8:55:30 AM
 *  Author: J
 */ 


#include <avr/io.h>

#include "blake2.h"

int main(void)
{
    while(1)
    {
		uint8_t out[64];
		uint8_t in[4] = {'a', 'b', 'c', 0};
		uint8_t key[1] = {3};
		blake2b(out, in, key, sizeof(out), sizeof(in), sizeof(key));
        //TODO:: Please write your application code 
    }
}