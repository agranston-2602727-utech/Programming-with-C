tripPerHour = 20

pkgcosts = {"scenic": 119, "relaxation": 139, "joyous": 149}

TotCust = 0
TotRev = 0

CustID = input("Enter Customer's ID (Type 'exit' to finish): ")

while CustID != "exit":
    CustName = input("Enter Name: ")
    TripHours = int(input("Enter Length of Trip (1, 2, or 3 hours): "))
    pkgtype = input("Enter Package Type (Scenic/Relaxation/Joyous): ").lower()
    if TripHours > 3; 
        print(f"\nExtended Trips are unavailable. Please try again")


    basecost = pkgcosts[pkgtype]
    tripcost = basecost + (tripPerHour*TripHours)

    print(f"Custimer {CustID} ({CustName}): US${tripcost}")

    TotCust += 1
    TotRev += tripcost

    CustID = input("\nEnter Customer's ID (Type 'exit' to finish): ")

print(f"\nCustomers served: {TotCust}")
print(f"Total Revenue: US${TotRev}")