# control_toy_car_over_bluetooth
Making a toy car by arduino+bluetooth  
建立一台由可用藍芽操作的玩具車  
使用arduino + HC05

建意使用  
PC(Linux) + USB2UART(FT232) + HC05(BT host) 控制 HC05(BT device) + arduino  
而不要  
PC(Linux) + PC的藍芽 控制 HC05(BT device) + arduino  

USB2UART + HC05(BT host), PC端只要考慮/dev/ttyUSB0,省事  
如何配對HC05(BT host)與HC05(BT device)  
自行google一下  

使用電子變速器控制馬達轉速與正反轉    
電子變速器的控制,類似於舵機的PWM控制  
以筆者的電子變速器, 值0x64馬達不轉, 大於0x64馬達正轉, 小於0x64馬達逆轉  

# 架設
auduino --- 電子變速器2x --- 馬達x2

# 測試  
把code燒到arduino  
測試時可以省略HC05
PC(Linux) --- USB2UART(FT232) --- auduino --- 電子變速器2x --- 馬達x2  

PC(Linux)不用寫code, 用echo就可以測試了  


# In progress  
