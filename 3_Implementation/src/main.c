/*PROJECT :-M3_WIPER_CONTROL_SYSTEM*/

//DEFINING all the Required pins

#define GPIOD_BASE_ADDR 0x40020C00																	//Defining Base address for GPIO//for all the LEDs
#define GPIOD_ODR_OFFSET 0x14       															   //LED are the outputs so we are using ODR 
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)

//Adding Base address and offset address to the LEDs

#define RCC_BASE_ADDR 0x40023800 																	//Defining RCC Address
#define RCC_AHB1ENR_OFFSET 0x30   																	//Defining Offset for RCC
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

//Adding Base address and offset address for RCC

#define GPIOA_BASE_ADDR 0x40020000  																//Defining Base address for switch
#define GPIOA_IDR_OFFSET 0x10 																		//switch is input so we are using IDR
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)

//Adding Base address and offset address for SWITCH

#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)

//Adding Base address and offset address To clear the Previous one for LEDs

#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)
//Adding Base address and offset address to clear the Previous Switch settings


//MAIN PROGRAM STARTS FROM HERE ONWARDS
int main()
{
	int z,y=0,x=0;  																				//Declaring and Initilizing Variables
	RCC_AHB1ENR |= (1<<3)|(1<<0); 																	//Enabling the LED and the switch
	GPIOD_MODE = 0; 																				//For Clear LED
	GPIOA_MODE = 0; 																				//For Clear Switch
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);                                                  //to assign LED 12 as output pin
	GPIOD_MODE |= (0<<27)|(1<<26);                                                  //to assign LED 13 as output pin
	GPIOD_MODE |= (0<<29)|(1<<28);  												//to assign LED 14 as output pin
	GPIOD_MODE |= (0<<31)|(1<<30);  												//to assign LED 14 as output pin as per the Datasheet
	GPIOA_MODE |= (0<<1)|(0<<0);    												//to assign Switch as input pin as per the Datasheet
	GPIOD_ODR = 0X00;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1) 									// Switch Status On
					{
						y++; 														//Increment for Switch
					}
					if(y>30000)
				    {
					y=0;															//RED Led should be in ON state
					GPIOD_ODR |= 1<<14;
					for(z=0;z<100000;z++);
					}
					else if(y>0 && y<30000)
					{
					x=1;
                    }
					else
					{

					}
						if(x==1)
						{

					    //By using Fast Frequency delay

				        for(x=0;x<5;x++) 										 //For LED GREEN
						{
						GPIOD_ODR |= 1<<12;
						for(z=0;z<20000;z++);
						GPIOD_ODR &= ~(1<<12);
						for(z=0;z>=20000;z++);
						}
						for(x=0;x<5;x++)  									    //For LED ORANGE
						{
						GPIOD_ODR |= 1<<13;
						for(z=0;z<20000;z++);
						GPIOD_ODR &= ~(1<<13);
					    for(z=0;z>=20000;z++);
						}
						for(x=0;x<5;x++)   										//For LED BLUE
						{
						GPIOD_ODR |= 1<<15;
						for(z=0;z<20000;z++);
						GPIOD_ODR &= ~(1<<15);
						for(z=0;z>=20000;z++);
						}

						//Medium Speed Delay

						for(x=0;x<5;x++)  										//For LED GREEN
						{
						GPIOD_ODR |= 1<<12;
						for(z=0;z<40000;z++);
						GPIOD_ODR &= ~(1<<12);
						for(z=0;z>=40000;z++);
						}
						for(x=0;x<5;x++)  										//For LED ORANGE
						{
						GPIOD_ODR |= 1<<13;
						for(z=0;z<40000;z++);
						GPIOD_ODR &= ~(1<<13);
						for(z=0;z>=40000;z++);
						}
						for(x=0;x<5;x++)  										//For LED BLUE
						{
						GPIOD_ODR |= 1<<15;
						for(z=0;z<40000;z++);
					    GPIOD_ODR &= ~(1<<15);
						for(z=0;z>=40000;z++);
						}
						//High Speed Delay

						for(x=0;x<5;x++)  										//For LED GREEN
					    {
						GPIOD_ODR |= 1<<12;
						for(z=0;z<80000;z++);
						GPIOD_ODR &= ~(1<<12);
						for(z=0;z>=80000;z++);
						}
						for(x=0;x<5;x++)  										//For LED ORANGE
						{
						GPIOD_ODR |= 1<<13;
						for(z=0;z<80000;z++);
						GPIOD_ODR &= ~(1<<13);
						for(z=0;z>=80000;z++);
						}
						for(x=0;x<5;x++)  										//For LED BLUE
						{
						GPIOD_ODR |= 1<<15;
						for(z=0;z<80000;z++);
						GPIOD_ODR &= ~(1<<15);
						for(z=0;z>=80000;z++);
						}

						}


	}
	return 0;
}
