# Portland Rafting Company Trip Cost Management

## Program/problem name

**Portland Rafting Company Daily Trip Cost Management System**

This name describes a program that processes customers' rafting trip selections, calculates each trip's cost, and reports daily customer and revenue totals.

## Original problem statement

The Portland Rafting Company would like a program to manage its daily operations of providing customers with personalized bamboo raft trips on the river lasting 1, 2 or 3 hours. Three packages are offered, which provide extras along with the trip on the river, the:

- **Scenic Tour** (base cost - US$119), which includes stopping for drinks or snacks
- **Relaxation Tour** (base cost - US$139), which includes stopping at popular landmarks or for photos
- **Joyous Fun Tour** (base cost - US$149), which allows for swimming.

The number of hours determines how many different landmarks (in the case of the Relaxation Tour), the length of the drink/snack stop (in the case of the Scenic Tour) or the length of time spent swimming (in the case of the Joyous Fun Tour). In addition to the package cost, each hour spent on the trip attracts a cost of US$20.

Write the pseudocode for a program that will accept a series of records. Each record contains a customer ID, customer name, the number of hours that the customer would like to spend on the trip and the type of package selected. Based on the package type and the number of hours, the program should determine the cost of the trip for EACH customer.

Output for the program consists of the customer ID, customer name and the cost of the trip for each customer. It should also output the total number of customers processed for the day and the overall total cost of all trips made by customers on any particular day. The program should use -1 for the customer ID to signal that no more records are to be processed. Assume valid input.

## Structured requirements analysis

### Purpose

Process the day's rafting bookings, calculate the price of each customer's selected trip, and summarize the day's customer count and trip revenue.

### Input data

Each customer record contains:

| Field | Description |
|---|---|
| Customer ID | Unique customer identifier; `-1` marks the end of input |
| Customer name | Customer's name |
| Trip duration | Number of hours: 1, 2, or 3 |
| Package type | Scenic Tour, Relaxation Tour, or Joyous Fun Tour |

Input is assumed valid. The sentinel record indicates that processing should stop; it is not a customer booking.

### Packages and base costs

| Package | Base cost (USD) | Included extra |
|---|---:|---|
| Scenic Tour | $119 | Stop for drinks or snacks; stop length depends on trip duration |
| Relaxation Tour | $139 | Stops at landmarks or for photos; number of landmarks depends on trip duration |
| Joyous Fun Tour | $149 | Swimming; swimming time depends on trip duration |

### Processing rules

1. Select the base cost associated with the customer's package.
2. Add **US$20 for each hour** of the trip.
3. Calculate each customer's trip cost using:

   **Trip cost = package base cost + (US$20 × trip duration in hours)**

4. For every processed customer, increment the daily customer count and add that customer's trip cost to the daily total cost.
5. Continue accepting records until the customer ID is `-1`.

The package's included extra is described by the problem but does not add a separate charge beyond the stated base cost and hourly charge.

### Required outputs

For each customer record processed, display:

- Customer ID
- Customer name
- Trip cost

After the sentinel is reached, display:

- Total number of customers processed for the day
- Overall total cost of all trips for the day

## Pseudocode

The requested deliverable here is the problem statement and its analysis; pseudocode is intentionally not included.
