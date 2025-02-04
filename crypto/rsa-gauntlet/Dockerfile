FROM python:3-slim

RUN apt-get update -y && apt-get upgrade -y && apt-get install socat -y
RUN pip install pycryptodome

WORKDIR /app
COPY ./chal.py ./flag.txt ./

CMD ["socat", "TCP-LISTEN:1337,reuseaddr,fork", "EXEC:'python /app/chal.py'"]
