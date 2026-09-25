class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        sum=0
        for word in words:
            s=True
            for ch in word:
                if ch not in chars:
                    s=False
                    break
            if s==True:
                sum+=len(word)
        return sum
        