class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        count=Counter(chars)
        sum=0
        for word in words:
            word_count=Counter(word)
            s=True
            for ch in word:
                if count[ch]<word_count[ch]:
                    s=False
                    break
            if s==True:
                sum+=len(word)
        return sum
        