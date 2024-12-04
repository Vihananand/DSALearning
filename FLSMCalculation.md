# FLSM - Static Routing: 192.168.10.0

**1. Counting Networks**

- Determine the total number of required networks.

**2. Calculating Subnet Bits (n)**

- Find the smallest `n` such that `2^n` is greater than or equal to the number of networks.
- For example, if we need 5 networks:
  - `2^2 = 4` (not enough)
  - `2^3 = 8` (sufficient)
  - So, `n = 3`

**3. Calculating the Updated Subnet Mask**

- Convert the subnet mask to binary:
     `255.255.255.11100000`
- Set the last `n` bits to 1:
     `255.255.255.11111111`
- Convert back to decimal:
     `255.255.255.255`

**4. Calculating the Host Range**

- Subtract the updated subnet mask from 255.255.255.255:

     ```
       255.255.255.255
   - 255.255.255.224
     -------------------
          0.0.0.31
     ```

- This indicates that each network can have 31 usable hosts.

**5. Assigning IP Ranges**

- Allocate IP ranges to each network, incrementing by the host range:
  - Network 1: 192.168.10.0 - 192.168.10.31
  - Network 2: 192.168.10.32 - 192.168.10.63
  - Network 3: 192.168.10.64 - 192.168.10.95
  - Network 4: 192.168.10.96 - 192.168.10.127
  - Network 5: 192.168.10.128 - 192.168.10.159

**Note:**

- All networks have a fixed-length subnet mask, hence the term "FLSM" (Fixed-Length Subnet Mask).
<br><br>

# VLSM - Static Routing (62 host requirement)

1. **Host Bit:** Calculate host bit = n.
- (2<sup>n</sup> > No. of Host Requirement) = 2<sup>6</sup> | n = 6.

2. **Network bits:** Calculate network bits = 32 - n.
- 32 - 6 = 26 network bits

3. **Updated Subnet Mask:** ``` 11111111.11111111.11111111.11000000``` = ```255.255.255.1*2^7 + 1*2^6 ``` = ``` 255.255.255.192```

4. **IP Range:**

```
  255.255.255.255
- 255.255.255.192
 -----------------
     0.0.0.63
```
<br><br>

# VLSM - Static Routing (32 host requirement)

1. **Host Bit:** Calculate host bit = n.
- (2<sup>n</sup> > No. of Host Requirement) = 2<sup>5</sup> | n = 5.

2. **Network bits:** Calculate network bits = 32 - n.
- 32 - 5 = 27 network bits

3. **Updated Subnet Mask:** ``` 11111111.11111111.11111111.11100000``` = ```255.255.255.1*2^7 + 1*2^6 + 1*2^5 ``` = ``` 255.255.255.224```

4. **IP Range:**

```
  255.255.255.255
- 255.255.255.224
 -----------------
     0.0.0.31
```
<br><br>

# VLSM - Static Routing (4 host requirement)

1. **Host Bit:** Calculate host bit = n.
- (2<sup>n</sup> > No. of Host Requirement) = 2<sup>2</sup> | n = 2.

2. **Network bits:** Calculate network bits = 32 - n.
- 32 - 2 = 30 network bits

3. **Updated Subnet Mask:** ``` 11111111.11111111.11111111.11111100``` = ```255.255.255.1*2^7 + 1*2^6 + 1*2^5  + 1*2^4 + 1*2^3 + 1*2^2``` = ``` 255.255.255.252```

4. **IP Range:**

```
  255.255.255.255
- 255.255.255.252
 -----------------
     0.0.0.3
```