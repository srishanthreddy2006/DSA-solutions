class Solution:
    def smallestSubsequence(self, s: str) -> str:
        last_seen = {char: i for i, char in enumerate(s)}
        
        stack = []
        seen = set()
        
        for i, char in enumerate(s):
            if char in seen:
                continue
                
            # If the current character is smaller than the last character in the stack,
            # AND that stack character appears again later in the string, remove it.
            while stack and char < stack[-1] and i < last_seen[stack[-1]]:
                seen.remove(stack.pop())
                
            stack.append(char)
            seen.add(char)
            
        return ''.join(stack)
