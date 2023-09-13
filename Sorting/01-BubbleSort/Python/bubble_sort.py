def main():
    
    input = list(map(int,open("../input.txt", "r").readlines()))
    
    print(input)
    for i in range(0,len(input)):
        for j in range(0,len(input)-i-1):
            if input[j] > input[j+1]:
                input[j:j+2] = [input[j+1], input[j]]
                print(input)
    
if __name__ == "__main__":
    main()
