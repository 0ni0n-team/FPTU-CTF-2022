FROM python:3.10
ADD enc.py ./
ADD secret.py ./
RUN pip install PyCryptodome
CMD ["python", "enc.py"]

