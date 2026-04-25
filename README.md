# STM32F767-LED-Register-Control
STM32F767ZI 레지스터 제어를 통한 LED 점등 기초 실습

## 하드웨어 구성
- **Board**: NUCLEO-F767ZI
- **LED Pin**: GPIOD 3번 핀 (PD3)

## 코드 설명
이 프로젝트는 HAL 라이브러리를 쓰지 않고 **CMSIS 레지스터**를 직접 제어합니다.
- `RCC->AHB1ENR`: GPIOD 포트의 클럭을 활성화하여 사용 가능한 상태로 만듭니다.
- `GPIOD->MODER`: PD3 핀의 모드를 General Purpose Output으로 설정합니다.
- `GPIOD->OSPEEDR`: 출력 속도를 Medium Speed로 설정합니다.
- `GPIOD->ODR`: 출력 데이터 레지스터를 통해 LED를 제어합니다 (0일 때 On, 1일 때 Off).
