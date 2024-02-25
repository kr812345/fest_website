print("rock/paper/scissor")
player1 = input("Player 1: ")
player2 = input("Player 2: ")

if player1 == "rock" and player2 == "paper":
    print("Player 2 is the winner!!")
elif player1 == "rock" and player2 == "scissor":
    print("Player 1 is the winner!!")
elif player1 == "paper" and player2 == "scissor":
    print("Player 2 is the winner!!")
elif player1 == player2:
    print("It's a tie!!")
else:
    print("Invalid input!!")

    