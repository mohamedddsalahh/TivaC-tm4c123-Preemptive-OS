#ifndef BITWISE_OPERATION
#define BITWISE_OPERATION

#define SET_BIT( REG , BIT ) ( REG |=  ( 1 << BIT ) )
#define CLEAR_BIT( REG , BIT ) ( REG &= ~( 1 << BIT ) )
#define GET_BIT( REG , BIT ) ( ( REG & ( 1 << BIT ) ) >> BIT ) 
#define TOGGLE_BIT( REG , BIT ) ( REG ^= ( 1 << BIT ) )


/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


#endif
