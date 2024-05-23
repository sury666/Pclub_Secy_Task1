<div align = center>

# Editorial for **Magical Creature Census**

</div>

This problem requires an efficient allocation of census teams to cover the entire Forbidden Forest while minimizing the total maximum danger encountered by each team.
In order to accomplish this, we must assign teams to different habitat preferences, making sure that the entire forest area is covered.
Store the danger levels of each habitat in a vector and sort it. Allocate the first $k-1$ teams to the least $k-1$ highest danger levels in each habitat.
Assign the rest of the magical creatures to the last team. This way, the maximum danger encountered by the last team will be the highest danger level in all magical creatures, and the highest danger levels faced by the rest of the teams will be minimum.

Now, let's analyze the solution:

### 1. Input Reading:

* Read three integers: $n$ (number of magical creatures), $m$ (number of habitat preferences), and $k$ (number of census teams available).
* Read the danger level and habitat preference for each magical creature.

### 2. Initialization:

* Initialize a vector to hold creatures, with each creature being defined by a pair of integers indicating their danger level and preferred habitat.
* Create a vector to store the highest level of danger experienced in each habitat preference.

### 3. Update Maximum Danger Levels:

* Iterate through the creatures and update the highest danger level found in each habitat preference.
* Keep track of the highest level of danger experienced in each preferred habitat.

### 4. Sort Maximum Danger Levels:

* Sort the vector that contains the highest danger levels for each habitat preference.

### 5. Assign Teams:

* In order to minimize the total maximum danger faced by each team, assign teams to cover areas with the lowest maximum danger levels.
* Distribute $k-1$ teams to handle the $k-1$ lowest maximum danger levels.
* Assign the rest of the creatures, including the one with the highest level of danger, to the last team.

### 6. Compute the Total Minimalized Sum:

* Calculate the total minimalized sum by adding together the highest levels of danger faced by each team.

### 7. Output:

* Output the total minimalized sum.

## Solution Explanation:

* By sorting the highest levels of danger, we make sure that the teams are assigned to cover habitats with the lowest maximum danger levels first.
* Allocating $k-1$ teams to the lowest maximum danger levels guarantees that these teams will face the least dangerous creatures.
* The last team is assigned the remaining creatures, including the one with the highest danger level, in order to minimize the overall sum.
