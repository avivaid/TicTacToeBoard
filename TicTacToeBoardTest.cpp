/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, placePiaceTest)
{
	TicTacToeBoard b; 
	ASSERT_EQ(b.placePiece(-10 ,1), Invalid);
}

TEST(TicTacToeBoardTest, placePiaceTest2)
{
	TicTacToeBoard b; 
	ASSERT_EQ(b.placePiece(1 ,1), X);
}


TEST(TicTacToeBoardTest, placePiaceTest3)
{
	TicTacToeBoard b; 
	b.placePiece(2,2);
	ASSERT_EQ(b.placePiece(2 ,2), b.getPiece(2,2));
}

TEST(TicTacToeBoardTest, getPiaceTest1)
{
	TicTacToeBoard b; 
	ASSERT_EQ(b.getPiece(2 ,2), Blank);
}

TEST(TicTacToeBoardTest, getPiaceTest2)
{
	TicTacToeBoard b; 

	ASSERT_EQ(b.getPiece(2 ,12), Invalid);
}



TEST(TicTacToeBoardTest, TogleTurnTest1)
{
	TicTacToeBoard b; 

	ASSERT_EQ(b.toggleTurn (), O);
}



TEST(TicTacToeBoardTest, getWinerTest1)
{
	 TicTacToeBoard b; 

	ASSERT_EQ(b.getWinner(), Invalid);
}

TEST(TicTacToeBoardTest, getWinerTest2)
{
	 TicTacToeBoard b; 
	b.placePiece(0,0);
	b.toggleTurn();
	b.placePiece(0,1);
		b.toggleTurn();
	b.placePiece(0,2);
	
	ASSERT_EQ(b.getWinner(), b.getPiece(0,0));
}
TEST(TicTacToeBoardTest, getWinerTest3)
{
	 TicTacToeBoard b; 
	b.placePiece(1,1);
	b.toggleTurn();
	b.placePiece(0,0);
	b.toggleTurn();
	b.placePiece(2,2);

	ASSERT_EQ(b.getWinner(), b.getPiece(0,0));
}




TEST(TicTacToeBoardTest, getWinerTest4)
{
	 TicTacToeBoard b; 
	b.placePiece(0,0);
	b.toggleTurn();
	b.placePiece(1,0);
	b.toggleTurn();
	b.placePiece(1,2);
	b.getWinner();

	ASSERT_EQ(b.getWinner(), b.getPiece(0,0));
}




TEST(TicTacToeBoardTest, getWinerTest5)
{
	TicTacToeBoard b;
	b.placePiece(0,0);
	b.placePiece(0,1);
	b.placePiece(0,2);
	b.placePiece(1,0);
	b.placePiece(1,1);
	b.placePiece(1,2);
	b.placePiece(2,0);
	b.placePiece(2,1);
	b.placePiece(2,2);
				
	ASSERT_EQ(b.getWinner(), Blank);

}








