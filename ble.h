/*
 * WEARABLE INDOOR LOCALIZATION DEVICE
 * ECE 453, FALL 2014
 *
 * Calvin Hareng
 * Pedro Melgarejo
 * Robert Wagner
 *
 * BLE.H
 */

#ifndef BLE_H_
#define BLE_H_

//ble functions
void BLE_turnOn();
void BLE_turnOff();
void BLE_toggleEcho();
void BLE_startAdvertisement();
void BLE_stopAdvertisement();
void BLE_changeNameTo(unsigned char *label);

//debug
void DEBUG_BLE_Echo_To_Terminal();

#endif /* BLE_H_ */