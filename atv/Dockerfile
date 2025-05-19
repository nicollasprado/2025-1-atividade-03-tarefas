FROM ubuntu:latest

RUN apt-get update && apt-get install -y fish && apt-get install -y g++

RUN mkdir -p /app

WORKDIR /app

CMD ["fish"]