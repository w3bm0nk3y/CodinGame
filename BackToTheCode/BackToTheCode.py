__author__ = 'Marcos Barrera'
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

#opponent_count = int(raw_input()) # Opponent count
opponent_count = 1 # Opponent count

# game loop
while 1:
    game_round = int(raw_input())
     # x: Your x position
     # y: Your y position
     # back_in_time_left: Remaining back in time
    x, y, back_in_time_left = [int(i) for i in raw_input().split()]
    print >> sys.stderr, "My X Position: ", x
    print >> sys.stderr, "My Y Position: ", y
    print >> sys.stderr, "My Back in Time Left", back_in_time_left

    for i in xrange(opponent_count):
         # opponent_x: X position of the opponent
         # opponent_y: Y position of the opponent
         # opponent_back_in_time_left: Remaining back in time of the opponent
        opponent_x, opponent_y, opponent_back_in_time_left = [int(j) for j in raw_input().split()]
        print >> sys.stderr, "Opponent X Position: ", opponent_x
        print >> sys.stderr, "Opponent Y Position: ", opponent_y
        print >> sys.stderr, "Opponent Back in Time Left", opponent_back_in_time_left

    for i in xrange(20):
        line = raw_input() # One line of the map ('.' = free, '0' = you, otherwise the id of the opponent)
        print >> sys.stderr, line

    # Write an action using print
    # To debug: print >> sys.stderr, "Debug messages..."

    # action: "x y" to move or "BACK rounds" to go back in time
    print "17 10"
