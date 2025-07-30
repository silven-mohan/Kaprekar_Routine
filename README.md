# 🔢 Kaprekar_Routine

This repository demonstrates the famous **Kaprekar’s Routine** in C, implemented for both **3-digit** and **4-digit** numbers.

Kaprekar's Routine is a process in recreational mathematics that repeatedly rearranges digits and subtracts numbers to reach a fixed point, known as the **Kaprekar Constant**.

---

## 📁 Files

- `Kaprekar_Routine_3.c`  
  Implementation of Kaprekar's routine for **3-digit numbers**.  
  Constant reached: **495**

- `Kaprekar_Routine_4.c`  
  Implementation of Kaprekar's routine for **4-digit numbers**.  
  Constant reached: **6174**

---

## 🧠 How It Works

### Steps of Kaprekar's Routine:

1. Take a number with at least two different digits.
2. Rearrange its digits to form the **largest and smallest** possible numbers.
3. Subtract the smaller number from the larger.
4. Repeat the process with the result.
5. Eventually, the number converges to a fixed constant.

---

## 🔍 Kaprekar Constants

| Digits | Constant | Example Start | Steps to Reach |
|--------|----------|---------------|----------------|
| 3-digit | 495 | 321 → 198 → ... → **495** | ≤ 6 steps |
| 4-digit | 6174 | 3524 → 3087 → ... → **6174** | ≤ 7 steps |

---

## ⚠️ Notes

- The input number **must have at least two different digits**.
- If all digits are the same (e.g., 1111 or 777), the result is always zero, and the routine doesn't proceed.
- Leading zeros are handled in sorting, but not preserved in numeric values (e.g., 0009 → 9).

---

## 🛠️ How to Compile & Run

Using GCC:

```bash
gcc Kaprekar_Routine_3.c -o kap3
./kap3

gcc Kaprekar_Routine_4.c -o kap4
./kap4
```

## 📄 License
This project is open-source and free to use for educational and learning purposes.

--------
