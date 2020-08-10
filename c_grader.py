import sys
from pathlib import Path


LAB_ABS_PATH = None


def main():
    pass


if __name__ == "__main__":
    try:
        LAB_ABS_PATH = Path(__file__).parent.joinpath(
            f"labs/{sys.argv[1]}").resolve()
    except IndexError:
        sys.exit("You must provide a lab as an arguement")
    main()
