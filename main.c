#include "stm32f767xx.h" //CMSIS 디바이스 헤더

uint8_t Test =0;
int main(void)
{
	// 클럭을 설정
	 RCC->AHB1ENR |= 0x00000008; //GPIODEN

	 GPIOD->MODER |= 0x00000040; //MODER3 = 01 비트 설정
	 //--> General-Purpose output mode 설정

	 GPIOD->OSPEEDR |= 0x00000040; // OSPEEDR3 = 01 --> 중간 속도

	 while(1)
	 {
		 if(Test==0)
		 {
			 GPIOD->ODR |= 0x00000008;  // 출력 1 (3.3V) --> LED Off
		 }
		 else
		 {
			 GPIOD->ODR &=~0x00000008;  // 출력 0 --> LED On
		 }
	 }
}

