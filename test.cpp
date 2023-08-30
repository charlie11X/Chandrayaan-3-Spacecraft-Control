#include "pch.h"
#include "chandrayaan3.cpp"

TEST(TestDirections, TestDirectionsFromNorthToDown) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);
	
	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromNorthToUp) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromNorthToLeft) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('W', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromNorthToRight) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('E', newdir);
	EXPECT_TRUE(true);

}


TEST(TestDirections, TestDirectionsFromSouthToDown) {
	char dir = 'S';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromSouthToUp) {
	char dir = 'S';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromSouthToLeft) {
	char dir = 'S';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('E', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromSouthToRight) {
	char dir = 'S';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('W', newdir);
	EXPECT_TRUE(true);

}


TEST(TestDirections, TestDirectionsFromWestToDown) {
	char dir = 'W';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromWestToUp) {
	char dir = 'W';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromWestToLeft) {
	char dir = 'W';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('S', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromWestToRight) {
	char dir = 'W';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('N', newdir);
	EXPECT_TRUE(true);

}


TEST(TestDirections, TestDirectionsFromEastToDown) {
	char dir = 'E';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromEastToUp) {
	char dir = 'E';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromEastToLeft) {
	char dir = 'E';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('N', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromEastToRight) {
	char dir = 'E';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('S', newdir);
	EXPECT_TRUE(true);

}



TEST(TestDirections, TestDirectionsFromUpToDown) {
	char dir = 'U';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromUpToUp) {
	char dir = 'U';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromUpToLeft) {
	char dir = 'U';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('W', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromUpToRight) {
	char dir = 'U';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('E', newdir);
	EXPECT_TRUE(true);

}




TEST(TestDirections, TestDirectionsFromDownToDown) {
	char dir = 'D';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromDownToUp) {
	char dir = 'D';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromDownToLeft) {
	char dir = 'D';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('E', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromDownToRight) {
	char dir = 'D';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('W', newdir);
	EXPECT_TRUE(true);

}

TEST(TestPositions, TestPositions) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);
	vector<char> commands = { 'f', 'r', 'u', 'b', 'l' };
	ExecuteChandrayan* execute = new ExecuteChandrayan(chandrayan, commands);
	execute->execute_commands();
	vector<int>positions = chandrayan->getSpacecraftPosition();
	vector<int>testposition = { 0,1,-1 };
	EXPECT_EQ(testposition, positions);
	EXPECT_TRUE(true);
}


TEST(TestPositions, TestPositionsOtherInput) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);
	vector<char> commands = { 'u', 'b', 'd', 'l', 'b', 'r', 'f' };
	ExecuteChandrayan* execute = new ExecuteChandrayan(chandrayan, commands);
	execute->execute_commands();
	vector<int>positions = chandrayan->getSpacecraftPosition();
	vector<int>testposition = { -1,-1,-1 };
	EXPECT_EQ(testposition, positions);
	EXPECT_TRUE(true);
}


TEST(TestPositionsandDirection, TestPositionsandDirection) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);
	vector<char> commands = { 'f', 'l', 'r', 'l', 'd', 'f', 'f' };
	ExecuteChandrayan* execute = new ExecuteChandrayan(chandrayan, commands);
	execute->execute_commands();
	vector<int>positions = chandrayan->getSpacecraftPosition();
	vector<int>testposition = { 0,1,-2 };
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
    EXPECT_EQ(testposition, positions);
	EXPECT_TRUE(true);
}