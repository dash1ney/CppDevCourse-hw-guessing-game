import pexpect
from time import sleep


def main():
    game = pexpect.spawn("build/main")

    answers=[0] * 10

    for i in range(0, 9):
        print(f"trying {i}... ", end='')
        assert(game.expect("Guess a number from 0 to 9: ", timeout=0.5) == 0)
        assert(game.sendline(str(i)) == 2)
        guessResult = game.expect(["Wrong!", "Correct!"], timeout=0.5)
        assert(guessResult in (0, 1))
        answers[i] = guessResult
        if guessResult == 0:
            print("WRONG")
        else:
            print("CORRECT")
            sleep(0.5)
            assert(not game.isalive())
            break

    exit(0 if sum(answers) == 1 else -1)


if __name__ == "__main__":
    main()
