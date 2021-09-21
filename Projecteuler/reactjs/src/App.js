import React, { Component } from 'react'
import logo from './logo.svg'
import './App.css'
import Body from "./components/Body"
import Header from './components/Header'

const Progress = () => (
  <p className="App-intro">
    <a href="https://youtu.be/34fE23aib1o">Learning React</a> /{'\n'}
    <a href="https://projecteuler.net/archives;page=1">Next Problem</a>
  </p>
)
const Intro = (props) => <p className="App-intro">{props.myIntro}</p>



function App() {
  return (
    <div className="App">
      <Header title="Project Euler" />
      <Progress />
      <Intro myIntro="Solving Project Euler probelms:" />
      <Body probN="Solution 1"
            answer="The sum of all the multiples of 3 or 5 below 1000 is 233168"
            link="https://github.com/inspiringsource/CS50x-2020/blob/main/Projecteuler/python/problem1.py"/>
      <Body probN="Solution 2"
            answer="The sum of the even-valued terms in the Fibonacci sequence : 1089154."
            link="https://github.com/inspiringsource/CS50x-2020/blob/main/Projecteuler/python/problem2.py"/>
      <Body probN="Solution 3"
            answer="The largest prime factor of the number 600851475143 are 71, 839, 1471 and 6857"
            link="https://github.com/inspiringsource/CS50x-2020/blob/main/Projecteuler/python/problem3.py"/>
      <Body probN="Solution 4"
            answer="The product of two 3-digit: 117, 143, 231, 273, 429, 693 and 819 
            The largest palindrome are 819 x 693 = 567567"
            link="https://github.com/inspiringsource/CS50x-2020/blob/main/Projecteuler/python/problem4.py"/>
      <Body probN="Solution 5"
            answer="In progress"
            link="https://github.com/inspiringsource/CS50x-2020/blob/main/Projecteuler/python/problem5.py"/>

    </div>
  )
}

export default App
