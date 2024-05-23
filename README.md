<div align = "center">

  # The Magical Creatures Census
Time limit per test : 2 seconds  
Memory limit per test : 256 megabytes  
Input : Standard input  
Output : Standard output

</div>

The Ministry of Magic is conducting a census of magical creatures in the Forbidden Forest. Every magical creature in the forest has a **unique** degree of danger and a specific habitat preference. The Ministry wants to make sure that the census teams are distributed effectively so that they can cover the whole forest with the least amount of danger they have to face.  
Given a list of magical creatures with their danger levels and habitat preferences, as well as the number of census teams available, *minimize the sum of the maximum danger levels encountered by each teams* while ensuring that each habitat preference is covered by **exactly one** team. Print that minimum sum.

## Input:

The first line contains three integers $n$ (number of magical creatures), $m$ (number of habitat preferences), and $k$ (number of census teams available) ($1 \leq k \leq m \leq n \leq 1000$).  
The next $n$ lines each contain two integers $d_i$ ($1 \leq d_i \leq 1000$), and $h_i$ ($1 \leq h_i \leq m$) (the danger level and habitat preference of each magical creature respectively).

## Output:

Print a single integer representing the minimalized sum of the maximum danger levels encountered by each team.

## Example:

### Input:

```
5 3 2  
3 1  
5 2  
2 1  
4 3  
6 2
```

### Output:

```
9
```

### Note:

The available magical creatures are:  

* Creature 1: Danger 3 & Habitat 1  
* Creature 2: Danger 5 & Habitat 2  
* Creature 3: Danger 2 & Habitat 1  
* Creature 4: Danger 4 & Habitat 3  
* Creature 5: Danger 6 & Habitat 2

The available habitat preferences are 1, 2, and 3.  
With 2 census teams available, the optimal allocation is:  

* Team 1 covers habitats 1, encountering creatures 1, and 3 with a maximum danger of 3.  
* Team 2 covers habitats 2 and 3, encountering creatures 2, 4, and 5 with a maximum danger level of 6.

The minimalized sum of the maximum danger level encountered by each team is 9 ($3 + 6$).

### The link to my polygon problem is [Polygon](https://polygon.codeforces.com/p2r6yZF/sury666/magical-creatures-census)
