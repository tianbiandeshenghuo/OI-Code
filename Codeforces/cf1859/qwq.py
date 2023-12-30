def generate_sequence(n):
    sequence = [2]
    for i in range(1, n):
        increment = (i // 2 + 1) * 2
        num = sequence[i-1] + increment
        sequence.append(num)
    return sequence

n = 11
sequence = generate_sequence(n)
print(sequence)
