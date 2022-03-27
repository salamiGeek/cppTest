#include <stdint.h>
#include "Uart.h"
#include <stdio.h>

CUart::CUart(UART_HandleTypeDef *huart) {

    mHuart = huart;
}

CUart::~CUart() {

}

HAL_StatusTypeDef CUart::readUart(std::string &frame, uint16_t len, uint32_t timeout) {

    uint8_t *recvBuf = new uint8_t[len];
    HAL_StatusTypeDef ret = HAL_UART_Receive(mHuart, recvBuf,  len, timeout);
    if(ret == HAL_OK) {
        frame = std::string((char *)recvBuf, len);
    }
    delete recvBuf;
    return ret;
}

HAL_StatusTypeDef CUart::writeUart(std::string &frame, uint16_t len, uint32_t timeout) {

    return HAL_UART_Transmit(mHuart, (uint8_t *)frame.c_str(), len, timeout);
}

HAL_StatusTypeDef CUart::readUart_IT(std::string &frame, uint32_t len) {
    
    uint8_t *recvBuf = new uint8_t[len];
    HAL_StatusTypeDef ret = HAL_UART_Receive_IT(mHuart, recvBuf,  len);
    if(ret == HAL_OK) {
        frame = std::string((char *)recvBuf, len);
    }
    delete recvBuf;
    return ret;
}