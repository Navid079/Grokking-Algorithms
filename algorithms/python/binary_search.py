def binary_search(lst, item):
    low, high = 0, len(lst) - 1
    while low <= high:
        mid = (low + high) // 2
        guess = lst[mid]
        if guess == item:
            return mid
        elif guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None


if __name__ == '__main__':
    lst = range(0, 101, 2)
    print(binary_search(lst, 32))
    print(binary_search(lst, 31))
