## 这是platfromio 使用c++方式开发STM32程序的示例

### 演示视频地址：[https://www.bilibili.com/video/BV1KZ4y1B7DH](https://www.bilibili.com/video/BV1KZ4y1B7DH)

## C++写单片机程序的意义所在

1. 针对大资源的热门单片机的尝新方案（ESP32、STM32F4/F7/H7、K210）
2. 为了开发效率（早期）
3. 方便功能扩展（中期、后期）
4. 降低维护成本（后期）

汇编-> c -> c++

## 解答你们问题

- [x] CubeMx中其他工具链是否支持？

- [x] ‌daplink如何使用？

  1. ![image-20220327201935653](C:\Users\taoyi\AppData\Roaming\Typora\typora-user-images\image-20220327201935653.png)
  2. 需要把pIO的默认openocd换成我们从官网上下载的openocd

- [x] 包含多个个源文件路径，目录如何配置？

  不用配置，只需要放到lib目录下

- [x] OpenoOCD是否能单步调试？

  能

- [x] 单片机中断C++使用是否正常？

  没问题！