import React, { useEffect } from "react";
import { useNavigate } from "react-router-dom";
import "./Services.css";
import theme_pattern from "../../assets/theme_pattern.svg";
import Services_Data from "../../assets/services_data";
import arrow_icon from "../../assets/arrow_icon.svg";

const Services = () => {
  useEffect(() => {
    // Scroll to the top of the page on component mount
    window.scrollTo(0, 0);
  }, []);

  const navigate = useNavigate();

  const handleReadMore = (service) => {
    navigate("/ReadMore", { state: { service } });
  };

  const handleShowMore = () => {
    navigate("/MoreServices");
  };

  return (
    <div id="services" className="services">
      <div className="title-box">
        <h1>Our Services</h1>
        <img src={theme_pattern} alt="" />
      </div>
      <span className='scroll-control'>
      <div className="services-container">
        {Services_Data.slice(0, 8).map((service, index) => (
          <div
          key={index}
          className="services-format"
          onClick={() => handleReadMore(service)}
          >
            <h2>{service.s_name}</h2>
            <p className="description">{service.s_desc}</p>
            <div className="services-readmore">
              <p>Read More</p>
              <img src={arrow_icon} alt="" />
            </div>
          </div>
        ))}
      </div>
        </span>
      {/* <div className="mywork-showmore" onClick={handleShowMore}>
        <p>Show More</p>
        <img src={arrow_icon} alt="" />
      </div> */}
    </div>
  );
};

export default Services;
