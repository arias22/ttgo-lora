/*******************************************************************************
 *
 *  File:          lorawan-keys_example.h
 *
 *  Function:      Example for lorawan-keys.h required by LMIC-node.
 *
 *  Copyright:     Copyright (c) 2021 Leonel Lopes Parente
 *
 *  Important      ██ DO NOT EDIT THIS EXAMPLE FILE (see instructions below) ██
 *
 *  Decription:    lorawan-keys.h defines LoRaWAN keys needed by the LMIC library.
 *                 It can contain keys for both OTAA and for ABP activation.
 *                 Only the keys for the used activation type need to be specified.
 *
 *                 It is essential that each key is specified in the correct format.
 *                 lsb: least-significant-byte first, msb: most-significant-byte first.
 *
 *                 For security reasons all files in the keyfiles folder (except file
 *                 lorawan-keys_example.h) are excluded from the Git(Hub) repository.
 *                 Also excluded are all files matching the pattern *lorawan-keys.h.
 *                 This way they cannot be accidentally committed to a public repository.
 *
 *  Instructions:  1. Copy this file lorawan-keys_example.h to file lorawan-keys.h
 *                    in the same folder (keyfiles).
 *                 2. Place/edit required LoRaWAN keys in the new lorawan-keys.h file.
 *
 ******************************************************************************/

#pragma once

#ifndef LORAWAN_KEYS_H_
#define LORAWAN_KEYS_H_

// Optional: If DEVICEID is defined it will be used instead of the default defined in the BSF.
// #define DEVICEID "<deviceid>"

// Keys required for OTAA activation:

// End-device Identifier (u1_t[8]) in lsb format
#define OTAA_DEVEUI 0x76, 0x68, 0x06, 0xD0, 0x7E, 0xD5, 0xB3, 0x70

// Application Identifier (u1_t[8]) in lsb format
#define OTAA_APPEUI 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

// Application Key (u1_t[16]) in msb format
#define OTAA_APPKEY 0x4C, 0x94, 0xC9, 0xBA, 0x7E, 0xE3, 0xB9, 0x1C, 0x49, 0x89, 0x8F, 0xF9, 0x44, 0xB2, 0x46, 0xCA

// -----------------------------------------------------------------------------

// Optional: If ABP_DEVICEID is defined it will be used for ABP instead of the default defined in the BSF.
// #define ABP_DEVICEID "<deviceid>"

// Keys required for ABP activation:

// End-device Address (u4_t) in uint32_t format.
// Note: The value must start with 0x (current version of TTN Console does not provide this).
#define ABP_DEVADDR 0x260B1283

// Network Session Key (u1_t[16]) in msb format
#define ABP_NWKSKEY 0x20, 0x58, 0xFB, 0x14, 0x99, 0x27, 0x9A, 0xCC, 0x7D, 0x22, 0x2E, 0x82, 0x5D, 0xCB, 0xC2, 0x13

// Application Session K (u1_t[16]) in msb format
#define ABP_APPSKEY 0x81, 0x99, 0xEC, 0x8A, 0xB6, 0xC3, 0xEA, 0x47, 0x8C, 0x6A, 0x53, 0xE2, 0x66, 0xF9, 0xF1, 0xC7

#endif // LORAWAN_KEYS_H_
