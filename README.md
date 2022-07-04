# platformio_cubemx_freertos

因为开发环境是Cubemx结合PlatformIO，并没有使用Keil（主要是太丑了），因此在配置FreeRTOS时遇到了很多问题，在此记录。

### 可以运行的工程：
[https://github.com/coco-alen/platformio_cubemx_freertos](https://github.com/coco-alen/platformio_cubemx_freertos)
如果有帮助可以给个星星。

### 使用说明：
其中的关键是Core/Src文件夹下的FreeRTOS库。
如果要对自己的项目添加FreeRTOS，首先需要将Core/Src/FreeRTOS文件夹下载下来，放到自己工程中的src文件夹下。

然后修改platformio.ini：
```
[env:black_f407vg]
platform = ststm32
board = black_f407vg
framework = stm32cube
build_flags =
    -I Core/Inc
    -I Core/Src/FreeRTOS/Source/CMSIS_RTOS
    -I Core/Src/FreeRTOS/Source/include
    -I Core/Src/FreeRTOS/Source/portable/GCC/ARM_CM3

[platformio]
src_dir = ./Core/Src
include_dir = ./Core/Inc
```
然后即可编译运行。

### 使用教程：
[https://blog.csdn.net/zhzht19861011/category_9265276.html](https://blog.csdn.net/zhzht19861011/category_9265276.html)
[https://blog.csdn.net/weixin_44793491/article/details/107577711](https://blog.csdn.net/weixin_44793491/article/details/107577711)

### 踩到的一些坑：

1. **不能**把FreeRTOS文件夹放到lib文件夹下，然后使用Ilib进行链接，这样platformio不能完全使用FreeRTOS库，导致报错：
```
.pio\build\black_f407vg\src\freertos.o: In function `StartDefaultTask':
freertos.c:(.text.StartDefaultTask+0x4): undefined reference to `osDelay'
.pio\build\black_f407vg\src\freertos.o: In function `ledCanFlask_Func':
freertos.c:(.text.ledCanFlask_Func+0x4): undefined reference to `osDelay'
.pio\build\black_f407vg\src\freertos.o: In function `led485Flask_Func':
freertos.c:(.text.led485Flask_Func+0x4): undefined reference to `osDelay'
.pio\build\black_f407vg\src\freertos.o: In function `led232Flask_Func':
freertos.c:(.text.led232Flask_Func+0x4): undefined reference to `osDelay'
.pio\build\black_f407vg\src\freertos.o: In function `MX_FREERTOS_Init':
freertos.c:(.text.MX_FREERTOS_Init+0x1a): undefined reference to `osThreadCreate'
freertos.c:(.text.MX_FREERTOS_Init+0x38): undefined reference to `osThreadCreate'
freertos.c:(.text.MX_FREERTOS_Init+0x56): undefined reference to `osThreadCreate'
freertos.c:(.text.MX_FREERTOS_Init+0x72): undefined reference to `osThreadCreate'
.pio\build\black_f407vg\src\main.o: In function `main':
main.c:(.text.startup.main+0x2e): undefined reference to `osKernelStart'
```

2. 不要去freertos官网下载他的kernel，那个主要是运行原理相关的？Cubemx使用的CMSIS是集成到Keil里面的一个封装库，在官网下不到（最明显的download按钮反正没下到），我也是使用了另一个github项目的文件。

### 其他：

1. 工程参考：[https://github.com/maxgerhardt/pio-cubemx-freertos](https://github.com/maxgerhardt/pio-cubemx-freertos)
1. 因为CubeMX生成的代码中.c和.h文件都是在Core文件夹下的，所以做了一下映射，这样每次重新生成代码之后就不需要移动文件了
