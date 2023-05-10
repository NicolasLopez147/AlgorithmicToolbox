def fastFibonacci(number):
    if number < 2:
        return number
    aux = 0
    aux1 = 0
    result = 1
    for i in range(1,number):
        aux = result
        result = result+aux1
        aux1 = aux
    return result

if __name__ == "__main__":
    number = int(input())
    print(fastFibonacci(number)%10)