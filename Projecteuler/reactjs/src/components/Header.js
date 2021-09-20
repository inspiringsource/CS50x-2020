import React from "react"

class Header extends React.Component {
    render() {
      return (
        <p>
          <h1>{this.props.title}</h1>
        </p>
      )
    }
  }

export default Header;