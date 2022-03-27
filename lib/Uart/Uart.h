#include <stdint.h>
#include <string>
#include "usart.h"

class CUart {
private:
    UART_HandleTypeDef *mHuart;
  
public:
    CUart(UART_HandleTypeDef *huart);
    ~CUart();
public:
    /**
     * @brief 串口读取
     * @param frame 
     * @param len 
     * @param timeout 
     * @return HAL_StatusTypeDef 
     */
    HAL_StatusTypeDef readUart(std::string &frame, uint16_t len, uint32_t timeout);
    /**
     * @brief 串口读取 中断方式
     * @param frame 
     * @param len 
     * @return HAL_StatusTypeDef 
     */
    HAL_StatusTypeDef readUart_IT(std::string &frame, uint32_t len);
    /**
     * @brief 串口写入
     * @param frame 
     * @param len 
     * @param timeout 
     * @return HAL_StatusTypeDef 
     */
    HAL_StatusTypeDef writeUart(std::string &frame, uint16_t len, uint32_t timeout);
};