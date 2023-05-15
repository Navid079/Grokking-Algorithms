function binary_search(list, item) {
  let [low, high] = [0, list.length];
  while (low <= high) {
    const mid = Math.floor((low + high) / 2);
    const guess = list[mid];

    if (guess == item) return mid;
    else if (guess > item) high = mid - 1;
    else low = mid + 1;
  }
  return null;
}

const list = [];
for (let i = 0; i <= 50; i++) list.push(i * 2);
console.log(binary_search(list, 32));
console.log(binary_search(list, 31));
