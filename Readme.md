Rohan Chordiya

1.Title:
       Bug in inbound function for negative or out of bound width value

  Description:
       For negative or out of bound  value the inbound function should
       return false. But for negative width or out of bound width and valid height
       value function return true instead of false.
       For this TEST condition: at() function should return "INVALID"(-1) instead it
       return some garbage value and test fails.

      TEST(ConnectXTest, atinvalid_width)
       {
         ConnectX x;
       	 ASSERT_EQ(-1,x.at(-6,4));
       }

2.Title:
      Code Aborted(code dump) if -1 column value is passed through placePiece()
      function

  Description:
      If -1 value is passed through placePiece() function the core dump message is
      displayed.   
