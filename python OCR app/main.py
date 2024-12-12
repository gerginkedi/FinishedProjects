# import pytesseract
# from PIL import Image
# import tkinter as tk
# from tkinter import filedialog
# from tkinter import messagebox

# def ocr_from_image(image_path):
    # try:
        # img = Image.open(image_path)
        # text = pytesseract.image_to_string(img, lang='eng')
        # return text
    # except Exception as e:
        # return f"Hata: {e}"

# def select_image():
    # file_path = filedialog.askopenfilename(
        # filetypes=[("Image Files", "*.png;*.jpg;*.jpeg;*.bmp;*.tiff")]
    # )
    # if file_path:
        # text = ocr_from_image(file_path)
        # text_output.delete("1.0", tk.END)
        # text_output.insert(tk.END, text)

# def copy_text():
    # window.clipboard_clear()
    # window.clipboard_append(text_output.get("1.0", tk.END).strip())
    # messagebox.showinfo("Basarili", "Metin panoya kopyalandi!")

# # Tesseract kurulumunun bulunduğu yolu belirtin (Windows için gerekli olabilir)
# pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

# # Uygulama arayüzü
# window = tk.Tk()
# window.title("OCR Uygulamasi")
# window.geometry("600x400")

# frame = tk.Frame(window)
# frame.pack(pady=10)

# btn_select = tk.Button(frame, text="Resim Sec", command=select_image)
# btn_select.pack(side=tk.LEFT, padx=10)

# btn_copy = tk.Button(frame, text="Metni Kopyala", command=copy_text)
# btn_copy.pack(side=tk.LEFT, padx=10)

# text_output = tk.Text(window, wrap=tk.WORD, height=15)
# text_output.pack(pady=10, padx=10, fill=tk.BOTH, expand=True)

# window.mainloop()



# # import pytesseract
# # from pil import image, imagegrab
# # import tkinter as tk
# # from tkinter import messagebox

# # # tesseract'ın kurulu olduğu yolu belirtin
# # pytesseract.pytesseract.tesseract_cmd = r'c:\program files\tesseract-ocr\tesseract.exe'

# # # ocr fonksiyonu
# # def perform_ocr():
    # # try:
        # # # panodaki (clipboard) resmi al
        # # image = imagegrab.grabclipboard()
        
        # # if image is none:
            # # messagebox.showerror("hata", "panoda bir resim bulunamadı. lütfen bir resim kopyalayın ve tekrar deneyin.")
            # # return

        
        # # text = pytesseract.image_to_string(image, lang="eng")
        
        # # # ocr sonuçlarını göster
        # # result_text.delete("1.0", tk.end)  # eski metni temizle
        # # result_text.insert(tk.end, text)
    # # except exception as e:
        # # messagebox.showerror("hata", f"bir hata oluştu: {e}")

# # # tkinter arayüzü oluşturma
# # root = tk.tk()
# # root.title("ocr uygulaması")

# # # arayüz elemanları
# # instruction_label = tk.label(root, text="panodan bir resim yapıştırmak için resmi kopyalayın ve 'ocr çalıştır' düğmesine basın.", wraplength=400, justify="center")
# # instruction_label.pack(pady=10)

# # ocr_button = tk.button(root, text="ocr çalıştır", command=perform_ocr)
# # ocr_button.pack(pady=5)

# # result_label = tk.label(root, text="ocr sonuçları:")
# # result_label.pack()

# # result_text = tk.text(root, wrap="word", width=50, height=15)
# # result_text.pack(pady=10)

# # # arayüz döngüsünü başlat
# # root.mainloop()





import pytesseract
from PIL import Image, ImageGrab
import tkinter as tk
from tkinter import messagebox

# Tesseract'ın kurulu olduğu yolu belirtin
pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

# OCR fonksiyonu
def perform_ocr():
    try:
        # Panodaki (clipboard) resmi al
        image = ImageGrab.grabclipboard()
        
        if image is None:
            messagebox.showerror("Hata", "Panoda bir resim bulunamadı. Lütfen bir resim kopyalayın ve tekrar deneyin.")
            return

        # OCR işlemi yap
        text = pytesseract.image_to_string(image, lang="eng")
        
        # OCR sonuçlarını göster
        result_text.delete("1.0", tk.END)  # Eski metni temizle
        result_text.insert(tk.END, text)
    except Exception as e:
        messagebox.showerror("Hata", f"Bir hata oluştu: {e}")

# Tkinter arayüzü oluşturma
root = tk.Tk()
root.title("OCR Uygulaması")

# Arayüz elemanları
instruction_label = tk.Label(root, text="Panodan bir resim yapıştırmak için resmi kopyalayın ve 'OCR Çalıştır' düğmesine basın.", wraplength=400, justify="center")
instruction_label.pack(pady=10)

ocr_button = tk.Button(root, text="OCR Çalıştır", command=perform_ocr)
ocr_button.pack(pady=5)

result_label = tk.Label(root, text="OCR Sonuçları:")
result_label.pack()

result_text = tk.Text(root, wrap="word", width=50, height=15)
result_text.pack(pady=10)

# Arayüz döngüsünü başlat
root.mainloop()





