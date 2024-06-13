 
Problem E
- There is a box smaller box with volume K and a larger box with dimension (x,y,z). Now you have to tell how many ways are there to fit the smaller box in the larger box.

- First idea: O(n^3) solution. Run three loops and find out the ways 
    if smallX * smallY * smallZ == k:
        way = (x - smallX + 1) * (y - smallY + 1) * (x - smallZ + 1)
    
    - Verdict: TLE

- Last approach: O(n^2) solution. Run two loops and findout the third number by the following formula:
    third number = (target / (first * second))

    - Verdict AC
    
Problem F
- 