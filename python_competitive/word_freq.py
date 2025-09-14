# https://www.freecodecamp.org/learn/daily-coding-challenge/2025-09-14

def get_words(paragraph):
    freqs = {}
    words = map(
        lambda x: x.strip(',').strip('.').strip('!').lower(),
        paragraph.split()
    )

    for word in words:
        if word not in freqs:
            freqs.update(((word, 1),))
        else:
            freqs.update(((word, freqs[word] + 1),))

    return sorted(freqs, reverse=True, key=lambda x: freqs[x], )[0:3]