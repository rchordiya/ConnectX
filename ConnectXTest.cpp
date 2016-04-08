/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"

class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest, atinvalid_width_height)
{
  ConnectX x;
	ASSERT_EQ(-1,x.at(-6,-55));
}

TEST(ConnectXTest, atinvalid_width)
{
  ConnectX x;
	ASSERT_EQ(-1,x.at(-6,4));
}

TEST(ConnectXTest, atinvalid_height)
{
  ConnectX x;
	ASSERT_EQ(-1,x.at(7,99));
}

TEST(ConnectXTest, atvalid_width_height)
{
  ConnectX x;
	ASSERT_GE(0,x.at(4,3));
}
TEST(ConnectXTest, placePiecevalid_column)
{
  ConnectX x;
	x.placePiece(5);
	ASSERT_EQ(2,x.at(5,5));
	x.placePiece(5);
	ASSERT_EQ(1,x.at(5,4));
  //x.showBoard();
}

TEST(ConnectXTest, check_whoseturn)
{
  ConnectX x;
	ASSERT_EQ(2,x.whoseTurn());
	x.placePiece(4);
	ASSERT_EQ(1,x.whoseTurn());
	x.placePiece(3);
	ASSERT_EQ(2,x.whoseTurn());
  //x.showBoard();
}
TEST(ConnectXTest, invalidplacePiece_whoseturn)
{
  ConnectX x;
	ASSERT_EQ(2,x.whoseTurn());
	x.placePiece(55);
	ASSERT_EQ(1,x.whoseTurn());
  //x.showBoard();
}


TEST(ConnectXTest, negativewidthConstructor )
{
  ConnectX x(-1,18,7);
	x.placePiece(5);
	ASSERT_EQ(2,x.at(5,5));
}
TEST(ConnectXTest, negativeheightConstructor )
{
  ConnectX x(12,-18,7);
	x.placePiece(5);
	ASSERT_EQ(2,x.at(5,5));
}
TEST(ConnectXTest, negativesequentialpeicesConstructor )
{
  ConnectX x(12,18,-7);
	x.placePiece(5);
	ASSERT_EQ(2,x.at(5,5));
}


TEST(ConnectXTest,exceednumberofpeices)
{
	ConnectX x;
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.placePiece(1);
	x.showBoard();
}
