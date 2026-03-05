# LeetCode 134 – Gas Station


## Problem Statement 

There are `n` gas stations arranged in a circular route.

Two arrays are given:

gas[i]  
Amount of fuel available at station i

cost[i]  
Fuel required to travel from station i to the next station

Rules of the journey:

1. The car starts with 0 fuel.
2. When you reach a station, you collect the fuel available there.
3. Then you spend fuel to reach the next station.

task is to find the 'index of the station from which the car can start and complete the entire circular route'.

If completing the route is impossible, return '-1'.


Example

gas = [1,2,3,4,5]  
cost = [3,4,5,1,2]

Output

3

Starting from station 3 allows completing the full circle.



--------------------------------------------------


## Thinking Process

First understand what happens at each station.

When the car reaches station `i`:

fuel gained = gas[i]  
fuel spent = cost[i]

So the net fuel change at that station is

gas[i] - cost[i]


Example

gas  = [1,2,3,4,5]  
cost = [3,4,5,1,2]

difference

-2  -2  -2   3   3


Meaning

station 0 → lose 2 fuel  
station 1 → lose 2 fuel  
station 2 → lose 2 fuel  
station 3 → gain 3 fuel  
station 4 → gain 3 fuel



### Important observation

If the **total fuel available in all stations is less than the total cost**, the journey is impossible.

sum(gas) < sum(cost) → return -1

Because the car simply does not have enough fuel to complete the route.



### Main idea used to solve the problem

While travelling we keep track of the current fuel in the car.

tank = current fuel in the car

Initially

tank = 0


At every station

tank = tank + gas[i] - cost[i]


If at some point

tank < 0

it means we cannot reach the next station from our chosen starting station.



### Key observation

If starting from station `start` fails at station `i`, then **all stations between start and i also cannot be valid starting points**.

Because they would reach station `i` with even less fuel.

So we move the starting point forward.

start = i + 1  
tank = 0

Then continue checking the rest of the stations.

After checking all stations:

If total gas is enough → return start  
Otherwise → return -1



### Time Complexity

O(n)

We scan the stations only once.


### Space Complexity

O(1)

Only a few variables are used.
--------------------------------------------------

## Real Engineering Problems Where This Concept Appears


1. Electric Vehicle Route Planning

EV navigation systems (for example systems used by companies like Tesla or other EV route planners) must decide two things:

• where the vehicle should start charging  
• whether the vehicle can complete the full trip

Mapping to the problem

gas[i]  → battery gained at charging station  
cost[i] → battery required to reach the next station  
tank    → current battery level in the vehicle

The navigation system checks:

• whether the total battery available along the route is enough  
• which charging station can act as the starting point

This follows the same feasibility logic used in the Gas Station problem.



2. Circular Logistics / Delivery Routes

Some logistics systems operate trucks in circular routes between warehouses or distribution hubs.

Example route

warehouse0 → warehouse1 → warehouse2 → ... → warehouseN

At each warehouse

• the truck may refuel  
• the truck consumes fuel to travel to the next warehouse

Mapping

gas[i]  → fuel available at warehouse  
cost[i] → fuel required to reach the next warehouse  
tank    → fuel currently in the truck

The route planning system determines:

• whether the truck can complete the full circular route  
• which warehouse should be chosen as the starting point

This uses the same idea as the Gas Station problem.



3. Token Circulation in Distributed Ring Systems

Some distributed systems use a ring topology where nodes are connected in a circular structure.

Examples include older token ring networks and some distributed coordination algorithms.

Each node:

• adds some resource or token value  
• consumes some resource while passing the work to the next node

Mapping

gas[i]  → resource added by the node  
cost[i] → resource required to forward the task  
tank    → available resource in the system

Engineers must check whether the token or task can circulate across the entire ring without the resources dropping below zero.